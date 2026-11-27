# <img src="assets/logo.svg" alt="fuzion logo" width="25" /> Fuzion Idioms

Idioms from [https://www.programming-idioms.org](https://www.programming-idioms.org) implemented in the Fuzion language.

They are published at the Fuzion language portal here: [https://fuzion-lang.dev/idioms/index](https://fuzion-lang.dev/idioms/index).


---


#### Some conventions we are using when creating the idioms

- If the idiom's text says _"Reverse the order of the elements of the list x"_ we use x as the feature name in our implementation.
- For the idioms to be automatically checked by CI we record the idiomXXXex.fz-files
  - e.g. <code>$FUZION_HOME/bin/record_simple_example any fz /home/not_synced/flang_dev/idioms/src/idiom23ex.fz</code>
  - idioms that should not be checked by CI need an idiomXXXex.fz.skip file
- The idiomXXX.fuzion files contain just the idiomatic way to express the idiom in Fuzion; typically you will get an error when trying to run those.
- The idiomXXXex.fz files contain full runnable examples.
- The HTML files contain a link to the idiom on programming-idioms.org, references to the idiomXXX.fuzion and idiomXXXex.fz files, and explanations of peculiarities of the idiom's implementation.
