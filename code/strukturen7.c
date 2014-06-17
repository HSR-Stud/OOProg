void foo(struct Angestellter a);
// grosser Kopieraufwand, nicht ideal

void foo(struct Angestellter* pa);
// nur Pointeruebergabe, effizient

void fooRead(const struct Angestellter* pa)
// nur Pointeruebergabe, read only durch const