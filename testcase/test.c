class A {}
class B { B() {{{{{ return; }}}}} }  // single return is allowed in constructor
class C { int func() { return 93; } }
int main() {}
void func() {
    if(false);else;
    while(true);
    for(;;);
    return;
    {;{{;{{}{}}}};{{};{}}};
    new A[10][][][];
    (new C).func() + (new C).func();   // new is a kind of expression
}