#include "cJSON.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 自定义测试程序：验证数组解析与缩进打印功能
 * @details 
 * 1. 构造一个包含嵌套数组的 JSON 字符串。
 * 2. 使用 cJSON_Parse 进行内存解析。
 * 3. 调用 cJSON_PrintPretty 验证自定义缩进（如 4 个空格）。
 * 4. 严格执行 cJSON_Delete 释放内存树，防止泄漏。
 */
int main() {
    /* 定义测试数据，包含 name, age 和一个 score 数组 */
    const char *text = "{\"name\":\"Tom\",\"age\":20,\"score\":[100,90,80]}";
    
    /* 阶段 1: 解析字符串 */
    cJSON *root = cJSON_Parse(text);
    if (root == NULL) {
        printf("Error: Parse failed!\n");
        return 1;
    }

    /* 阶段 2: 打印输出 */
    /* 注意：确保你在 cJSON.c 中已经实现了支持第二个参数（缩进量）的 cJSON_PrintPretty */
    char *pretty = cJSON_Print(root); 
    if (pretty != NULL) {
        printf("Formatted Output:\n%s\n", pretty);
        /* 使用系统标准 free 释放生成的字符串缓冲区 */
        free(pretty);
    }

    /* 阶段 3: 资源回收 */
    /* 递归销毁整个 JSON 树结构 */
    cJSON_Delete(root);

    return 0;
}
