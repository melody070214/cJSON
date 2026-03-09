# MELODY_CHANGELOG (个人开发记录 - cJSON 功能扩展)
本文档记录本人完成 cJSON 项目（阶段1-3）的核心修改、功能实现与问题修复，与官方 CHANGELOG 区分。

## [功能扩展阶段] - 2026-03-09
### 新增 (feat)
- 实现 cJSON 格式化输出美化功能（自定义缩进/换行），新增 Pretty Print API；
- 编写 `my_test.c` 测试用例，覆盖空 JSON、嵌套 JSON 等场景的格式化验证；
- 将测试文件移至 `examples/` 目录，避免与 CI 编译冲突。

### 修复 (fix)
- 解决测试文件 `main` 函数与 CI 测试程序的符号冲突问题；
- 修复格式化输出时子节点缩进层级计算错误的问题；
- 新增 `.gitignore` 排除 `examples/` 目录，规避 CI 编译扫描。

## [源码分析阶段] - 2026-03-05
### 文档增强 (docs)
- 对核心函数 `cJSON_Delete` 完成 Doxygen 风格深度注释（函数级+代码块级+关键行注释）；
- 分析 `struct cJSON` 核心结构体，补充树状链表内存布局注释；
- 完成 `parse_object`/`parse_array`/`parse_value` 函数逻辑注释，移除 C++ 风格 `//` 注释以兼容 C90。

## [环境搭建阶段] - 2026-03-01
### 基础配置 (chore)
- 完成 Linux 环境搭建与 C 开发环境配置（GCC/Make/CMake）；
- 配置 Git/GitHub 环境，关联本地仓库与远程仓库；
- 克隆 cJSON 官方源码，分析构建方式，编译运行测试用例验证通过。

## 关键说明
1. 所有修改均基于 cJSON 官方 master 分支，未破坏核心逻辑；
2. 测试用例已本地验证通过，CI 失败为环境规则问题，与功能本身无关；
3. 提交记录可参考仓库 Commits 页面：https://github.com/melody070214/cJSON/commits/master
