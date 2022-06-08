# c_class_time

## 概要
2021年のプロⅢの前期中間試験の過去問

## 問題
ユーザーが入力する0〜24の値から、その時刻の時間帯を出力する。

0〜4時は夜、5〜9時は朝、10時〜18時は昼、19時〜24時は夜とする

不正な入力値の場合は、エラー文を出力して終了する。

予想では多分switch使えっていう命令が下されている

**例**
```shell
$ cc [ファイル名].c && ./a.out
時刻を入力してください: 1
夜です。
```
```shell
$ cc [ファイル名].c && ./a.out
時刻を入力してください: 1
夜です。
```

```shell
$ cc [ファイル名].c && ./a.out
時刻を入力してください: -1
入力エラーです。 0~24で入力してください。
```