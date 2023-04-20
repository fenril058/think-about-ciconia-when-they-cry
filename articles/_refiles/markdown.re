= Markdownファイルの取り込み

@<href>{https://pandoc.org/,pandoc} および @<href>{https://github.com/kmuto/pandoc2review,pandoc2review} を使って、Markdown 形式で書かれたファイルをあたかも Re:VIEW の1つの章のように扱うことができます。

@<href>{https://pandoc.org/installing.html,Installing pandoc} に従って pandoc をまずご利用の環境にインストールしておいてください。

pandoc2review 機能を有効にするには、config.yml の contentdir パラメータを以下のように設定します。

//emlist{
contentdir: _refiles
//}

そして、catalog.yml に Markdown ファイルの拡張子を @<tt>{.re} に変更した名前で登録します。たとえばこのファイル自体を登録するのは以下のようになります。

//emlist{
PREDEF:
  - preface.re

CHAPS:
  - article.re
  - markdown.re

APPENDIX:

POSTDEF:
  - contributors.re
//}

pandoc の Markdown 記法を逸脱しない範囲で、Re:VIEW 文法の大半を代替できます。@<href>{https://github.com/kmuto/pandoc2review/blob/main/markdown-format.ja.md,pandoc2review における Markdown 形式処理の注意事項} を参照してください。
