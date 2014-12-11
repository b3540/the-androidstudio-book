= コミックマーケット 87版によせて

== Android Studio

Android Studioは、米Google社が開発しているスマートフォン向けのプラットフォーム「Android」で動作するソフトウェアを開発するためのIDE（統合開発環境）です。

//indepimage[android_studio_splash][][scale=0.4]

元々、Androidの開発環境として、@<kw>{ADT, Android Development Tools}と呼ばれるソフトウェアがありました。　

//indepimage[adt_splash][][scale=0.3]

ADTは、Eclipseベースの統合開発環境で、2007年11月にAndroidが発表になってから2013年の4月までのおよそ５年半、
Google社が提供する唯一のAndroidアプリ開発環境でした。

ところが、2013年4月、Google社は突然、新しい開発環境として「Android Studio」を発表します。

表向きは「ADTと平行して、新しい選択肢としてのAndroid Studio」という位置づけでしたが、
多くの開発者は「実質的なADTの廃棄宣言」と受け取りました。


=== Android Studioの躍進

Android Studioの発表直後のバージョンは「0.1.0 I/O Preview」。その頃は本当に不安定で、到底仕事で使えるものではありませんでした。

しかし、Android Studioは登場してから1年、非常に短い期間でバージョンをアップを繰り返していきました。
機能の充実と不具合の修正を繰り返し、ついにはADTより速く、便利で安定した機能を提供するようになりました。

反対に、私たちが当初予想したとおり、ADTはメンテナンスが最小限になり、徐々に時代遅れの開発環境になっていきました。


=== 永遠のベータ版

登場から約1年、Android Studioは安定して、実際の開発現場で十分に使えるまでになりました。
しかし、ここでもう一つの問題が起きます。

繰り返しになりますが、Android Studioは、非常に短いサイクルでアップデートします。
長くても2ヶ月に一度、短いときには2日に一度、アップデートがあります。

そして、アップデートの度に大小問わず、使い勝手が変わるのです。

//indepimage[fb20140908][書籍の執筆は基本的に公開しないで進めていたが、時折FacebookではAndroid Studioの変化に苦言を呈することもあった][scale=0.3]

アップデートの度に画面の構成が変わる。ファイルを開いたときの見た目が変わる。
便利になるのは良いのですが、バージョンが安定しない。
まるで成長期の子供のように落ち着きがありません。

//indepimage[fb20140925][この時点でBeta版は0.8.6が最新だったが、筆者は、Canaryビルドや@<kw>{AOSP, Android Open Source Project}版をビルドして変更点をトラッキングしていた][scale=0.3]

結局、チーム開発でAndroid Studioのバージョンアップについていくことは難しく、現場での利用者は一握りの開発者達に限定されていました。


=== 書籍執筆者の苦悩

一般の開発者以上に苦悩していたのが、Android開発を題材にした書籍の執筆者でしょう（ここでは筆者のことです）。

前述の通り、既に時代の流れはAndroid Studioに向いています。
これからAndroidアプリ開発を勉強する人がいるとすれば、Android Studioを使った方が良いことは間違いありません。

しかし、Android Studioがバージョンアップの度にあまりにも変わりすぎるので、執筆を終えて書籍が世に出る頃には、
時代遅れの情報になってしまうかもしれないのです。

書籍の執筆の話は2013年の7月頃に戴いていました。
しかし、Android Studioのバージョンが安定しないことを理由に、執筆を伸ばし伸ばしにしてきました。

=== 「Android Studioで始める 簡単Androidアプリ開発」

そうも言ってられなくなったのが、2014年も中盤にさしかかった頃です。

既にADTが古い開発環境となりつつあり、Android Studioという選択肢があるにも関わらず、
本屋に行っても、Android Studioを使って学べる本がありません。

そして、1.0がいつ出るか、誰にも（おそらくGoogleにさえも）わからないのです。

"初学者に向けてAndroid Studioを使った本を提供しよう。バージョンアップがあったらしょうがない。公式サイト等で、なるべくサポートを続けよう"

そう決めて一気に書き上げたのが、「Android Studioで始める簡単Androidアプリ開発@<fn>{gihyo_site}」です。

//indepimage[cover][Android Studioではじめる 簡単Androidアプリ開発][scale=0.25]

//footnote[gihyo_site][@<href>{http://gihyo.jp/book/2014/978-4-7741-6998-9}]


=== アップデートは突然に

「Android Studio 0.8.14が公開された」

そのニュースが飛び込んできたのは、脱稿し、急ピッチで編集を進めている時です。
本来であれば10月末に入稿するところを、印刷所に無理を言って連休明けまで伸ばしてもらった直後でした。

しかし、新しい手順を紙面に反映するには、あまりにも多くのページに手を加える必要がありました。
その時点で原稿はほとんどDTPを終えており、章構成や台割りも固まっていて、大きく構成を動かすことは到底不可能な段階でした。

初学者向けの本なので、セットアップ手順の解説は非常に重要です。セットアップで詰まってしまっては、あとのページに進む前に挫折してしまうでしょう。
そうなれば、そのあとの内容がいくら正しくても、本の価値を大きく毀損してしまうことは間違いありません。それだけは、なんとしてでも避けなければなりません。

//indepimage[fb20141102][0.8.14がBetaとして公開された時点でAOSPでは、0.9.x系の開発が進んでいた][scale=0.3]


=== 補足資料の公開

書籍側を変更するのが無理なら、補足として正しい情報を広めるしかありません。それも出来るだけ早くにです。
そこで、Android Studioの新しいバージョンに対応したセットアップ方法について書き下ろし、
クリエイティブコモンズ2.1の表示—非営利—改変禁止@<fn>{license}ライセンスの元で配布することにしました。

//indepimage[fb20141111][そして書籍の発売日当日、Android Studio 1.0 RC1がCanaryに登場して、筆者は震え上がることになる][scale=0.3]

12月10日にはAndroid Studio 1.0がリリースされ、ADTが表舞台から去りました。
Android Studioは、Android公式の開発環境として、今後ますます重要になってくるでしょう。

本書は、前述の補足資料をAndroid 1.0に対応して、コミケ特別版として印刷したものです。

本書については表紙・裏表紙を担当してくださった　　　　さんの著作権があるため、一般的な著作物と同様、無許可の複製は認めていません。
しかし、元となった補足資料は現在もクリエイティブコモンズライセンスで配布を続けていますし、
そちらには書籍の正誤表も含まれているので、友人や会社で同僚に配りたい場合は是非、そちらをダウンロードしてください。

@<href>{http://keiji.github.io/the-androidstudio-book/archives/book.pdf}

本書と「Android Studioで始める 簡単Androidアプリ開発」で、1人でも多くの人にAndroidアプリ開発に興味を持ってもらえれば、執筆者として、
技術者として、これ以上の幸せはありません。

//footnote[license][@<href>{http://creativecommons.org/licenses/by-nc-nd/2.1/jp/}]


== 表記関係について

本文書に記載されている会社名、製品名などは、一般に各社の登録商標または商標、商品名です。
会社名、製品名については、本文中では©、®、™マークなどは表示していません。


== 著作権について

本書は、有山圭二の著作物です。また、本書の表紙及び裏表紙のイラストは　　　　の著作物です。
本書の全部、または一部について、著作者から文書による許諾を得ずに複製することは禁じられています。


== 最新情報の提供

本文書に関する最新情報は引き続き、

 * 技術評論社サイト @<href>{http://gihyo.jp/book/2014/978-4-7741-6998-9}
 * HTML版 @<href>{http://keiji.github.io/the-androidstudio-book/}
 * PDF版 @<href>{http://keiji.github.io/the-androidstudio-book/archives/book.pdf}
 * GitHub @<href>{https://github.com/keiji/the-androidstudio-book}

で、提供します。
