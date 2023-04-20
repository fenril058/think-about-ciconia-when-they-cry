# キコニアのなく頃に phase 1 真相解明読本

このリポジトリは同人誌『キコニアのなく頃に phase 1 真相解明読本』の執筆を行う公開リポジトリです。

[TechBooster/ReVIEW-Template](https://github.com/TechBooster/ReVIEW-Template/) を元のテンプレートとして使用し、
[Re:VIEW](https://github.com/kmuto/review) version 5.7を用いて組版しています。

校正は [prh](https://github.com/vvakame/prh) と [textlint](https://github.com/textlint/textlint) を用いて行いました。

## 内容について

## ビルドについて
使用したソフトウェアのバージョンは以下のとおりです。
- Re:VIEW 5.7
  - ruby 3.2.2
- TeX Live 2023
  - uplatex
- node 18.16.0
  - npm 9.6.4

```
$ git clone git@github.com:fenril058/think-about-ciconia-when-they-cry
$ cd ReVIEW-Template
$ bundle install
$ npm install
$ npm run pdf # pdf出力
$ npm run epub # epub出力
$ npm run web # Webページ出力
$ npm run text # テキストファイル出力
```

出力は
- pdfは article/think-ciconia.pdf
- epubは article/think-ciconia.epub
- htmlは articles/webroot/index.html

一つ作ると他のすべては削除されるので注意してください。

より詳細なビルドについては [README.orig.md](./README.orig.md) を参照してください。

執筆時には
[pandoc](https://pandoc.org/) および [pandoc2review](https://github.com/kmuto/pandoc2review) を使って、Markdown 形式から
 Re:VIEW への変換も用いましたが、最終的にRe:VIEW形式のファイルをすべてcommitしているので、
現段階においてはこれらはなくてもビルドできるはずです。

## 権利
 * 本書の著作権はすべて筆者が所持します。
 * 設定ファイル、テンプレートなど制作環境（techbooster-doujin-base.styなど）はMITライセンスです
 * articles/styにあるファイルには以下のライセンスが適用されています。
   * review-jsbook.cls, review-base.sty, review-style.sty, review-custom.sty: MIT License
   * jumoline.sty: The LaTeX Project Public License
   * plistings.sty: MIT License
   * gentombow.sty: BSD License
   * jsbook.cls: BSD License
