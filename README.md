# C言語を用いたモンテカルロシミュレーション

モンテカルロ法を用いて円周率を算出した.

## 実行方法

お手持ちの`gcc`コンパイラで次のコマンドで実行できます.

```bash
$ gcc main.c
$ ./a.out
```

## 応用例

main.cの5行目のマクロの値を変更することで乱数を取る回数を変更できます.

```c
#define N 10000
```

一般に,`N`が大きいほど精度は高まります.

## 注意事項

実行ごとに結果は異なります.

# Author

* Author: Takahashi Katsuyuki
* E-mail: kkml.4220@gmail.com


