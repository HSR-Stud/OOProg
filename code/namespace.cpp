namespace MyLib1 {
	int i;
	void foo();
}

namespace MyLib2 {
	int i;
	void foo();
}

MyLib1::foo(); 
  // foo aus MyLib1
MyLib2::i = 17;
  // i aus MyLib2