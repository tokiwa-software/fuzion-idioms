# <img src="assets/logo.svg" alt="fuzion logo" width="25" /> Fuzion Idioms

Idioms from [https://www.programming-idioms.org](https://www.programming-idioms.org) implemented in the Fuzion language.

They are published at the Fuzion language portal here: [https://fuzion-lang.dev/idioms/index](https://fuzion-lang.dev/idioms/index).


---


#### Some conventions we are using when creating the idioms

- If the idioms text says _"Reverse the order of the elements of the list x"_ we use x as the feature name in our implemenation.
- For the idioms to be automatially checked by CI we record the idiomXXXex.fz-files
  - e.g. <code>$FUZION_HOME/bin/record_simple_example any fz /home/not_synced/flang_dev/idioms/src/idiom23ex.fz</code>
  - idioms that should not be checked by CI need a idiomXXXex.fz.skip file
- The idiomXXX.fuzion files contain just the idiomatic way the express the idiom in Fuzion, typically you will get an error when trying to run those.
- The idiomXXXex.fz files contain full runnable examples.
- The html files contain a link the idiom on programming-idioms.org, they reference the idiomXXX.fuzion idiomXXXex.fz files and explanations of peculiarties of the idioms implementation.

