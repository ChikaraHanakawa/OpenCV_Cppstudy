# 変数SOURCE_CORDEを宣言し、opencv_testという値を入れる。
# cmake -D SOURCE_CODE=(ソース名)で上書き可
set(SOURCE_CODE shape CACHE NAME "Target object name")

# CMakeの最低バージョンを記述
cmake_minimum_required(VERSION 2.8)

# ソリューション名を指定
project( ${SOURCE_CODE} )

# OpenCVのパッケージを探す
find_package( OpenCV REQUIRED )

#ヘッダファイルのパスを指定
include_directories( ${OpenCV_INCLUDE_DIRS} )

# 実行ファイル名とソース指定（ここではソースと同じ名前の実行ファイルを作ります）
add_executable( ${SOURCE_CODE} ${SOURCE_CODE}.cpp )

#リンク先のライブラリを指定
target_link_libraries( ${SOURCE_CODE} ${OpenCV_LIBS} )
