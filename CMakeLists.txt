# CMakeの最小バージョンを指定します。プロジェクトで使われているCMakeのコマンドや機能が、このバージョン以降で提供されていることを保証します。
cmake_minimum_required(VERSION 3.5)

# プロジェクトの名前を指定します。ここではプロジェクト名として'step1'を設定しています。
project(step1)

# ソースファイルを指定します。ここでは、main.cppをソースファイルとして設定しています。
# set(SOURCE_FILE src/imshow.cpp)
# set(SOURCE_FILE src/mono.cpp)
# set(SOURCE_FILE src/cutout.cpp)
set(SOURCE_FILE src/circle.cpp)

# set(SOURCE_FILE src/rectangle.cpp)
# set(SOURCE_FILE src/edge_detection.cpp)

# OpenCVが必要であることを示します。CMakeは、システム内でOpenCVを見つけ出し、それをビルドにリンクします。
find_package(OpenCV REQUIRED)

# OpenCVのヘッダーファイルへのパスをインクルードパスに追加します。これにより、ソースコード内でOpenCVのヘッダーを直接参照できます。
include_directories(
    ${OpenCV_INCLUDE_DIRS}
)

# 実行可能なバイナリー'main'を作成します。そのソースコードとして、上で定義したSOURCE_FILE（つまり、main.cpp）を使用します。
add_executable(main
    ${SOURCE_FILE}
)

# バイナリー'main'に対するリンクを設定します。ここでは、OpenCVライブラリをリンクしています。
target_link_libraries(main
    ${OpenCV_LIBRARIES}
)