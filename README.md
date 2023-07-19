# OpenCV_Cppstudy
***Document what I did to learn OpenCV. This repository written C++***
___
## 1.コンパイル方法
  ### 1-1.CMakeLists.txtの作成  
  CMakeLists.txt内の**opencv_test**をコンパイルしたいソースコード名に書き換える  
  ```  
  set(SOURCE_CODE opencv_test CACHE NAME "Target object name")
  ```
  ### 1-2.CMakeLists.txtを利用  
  **build**ディレクトリに移動後、以下のコマンドを実行
  ```
  cmake -D SOURCE_CODE=(コード名(拡張子なし)) ..
  ```
  以上を実行後，下記のような出力を確認
  ```
  -- Configuring done
  -- Generating done
  -- Build files have been written to:
  ```
  ```
  make
  ```
  ### 2.実行ファイルが作成される
  ```
  ./(実行ファイル名)
  ```
> [makefileの引用元](https://qiita.com/kekenonono/items/0fcf042bca2d3d17867a)  
> [OpenCVについての参考資料](https://www.kspub.co.jp/book/detail/1538290.html)
## 2.各ディレクトリの説明
  ### 1. src
  `src`内には，私がOpenCVの関数を勉強する際に作成したコードが入っています
  ### 2. images
  `images`内には，コードで使用する画像が入っています
  ### 3. build
  `build`内には，コンパイルのためのtxtファイルが入っています
