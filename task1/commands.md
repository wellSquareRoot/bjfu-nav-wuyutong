# Task 1 常用命令记录

## 1. 基础终端操作
# 更新软件包列表并安装 C++ 环境
sudo apt update
sudo apt install g++ cmake git

# 新建文件夹并进入
mkdir bjfu-nav-wuyutong
cd bjfu-nav-wuyutong

# 查看当前所在路径
pwd

# 创建空文件或修改文件时间戳
touch task1/commands.md

# 复制文件
cp ~/Desktop/1.png .

# 移动/重命名文件
mv 1.png screenshots/result.png

## 2. Git 与 GitHub 配置
# 配置 Git 全局用户名和邮箱
git config --global user.name "name"
git config --global user.email "email"

## 3. Git 仓库操作 (任务核心)
# 初始化本地仓库
git init

# 创建忽略文件 (不上传编译产物)
nano .gitignore

# 暂存所有修改
git add .

# 提交并填写备注
git commit -m "message"

# 推送到云端
git push

## 4. 分支与合并操作
# 创建并切换到 dev 分支
git checkout -b dev

# 切回 main 分支
git checkout main

# 合并分支 (引发冲突)
git merge dev

# 解决冲突后，标记为已解决
git add .

# 拉取云端最新代码
git pull

# 暂存本地修改 (防止 pull 冲突)
git stash

# 恢复暂存的修改
git stash pop