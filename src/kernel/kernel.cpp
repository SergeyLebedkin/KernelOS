class AAA {
private:
    int val0;
    int val1;
    int val2;
public:
    AAA() {}
    ~AAA() {}
};

// kernel_main
extern "C" void kernel_main(){
    unsigned long long* vid_mem = (unsigned long long *)0xb8000;
    vid_mem[1] = 0x1F201F201F201F20;
}