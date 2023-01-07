# OpenCV_Cppstudy
***Document what I did to learn OpenCV.***
___
## 1.コンパイル方法
  ### 1.CMakeLists.txtの作成  
  CMakeLists.txt内の**opencv_test**をコンパイルしたいソースコード名に書き換える  
  ```  
  set(SOURCE_CODE opencv_test CACHE NAME "Target object name")
  ```
  ### 2.ビルド  
  **build**ディレクトリに移動後、以下のコマンドを実行
  ```
  cmake -D SOURCE_CODE=(コード名(拡張子なし)) ..
  ```
  ```
  make
  ```
  ### 3.実行ファイルが作成される
  ```
  ./(実行ファイル名)
  ```
> [参考資料・引用元](https://qiita.com/kekenonono/items/0fcf042bca2d3d17867a)
> [OpenCVについての参考資料](https://www.kspub.co.jp/book/detail/1538290.html)
