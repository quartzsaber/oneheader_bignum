#ifndef BIGNUM_H_INCLUDED
#define BIGNUM_H_INCLUDED

#include <bitset>

template<int BITS>
class bignum {
protected:
    std::bitset<BITS> num;

public:
    bignum(const unsigned intmax_t init);
    bignum(const bignum& init);
    bignum& copy(unsigned intmax_t init);
    bignum& copy(const bignum& x);
    
    bignum& add(const bignum& x);
    bignum& sub(const bignum& x);
    bignum& mul(const bignum& x);
    bignum& div(const bignum& x);
    bignum& inc();
    bignum& dec();

    bignum& band(const bignum& x);
    bignum&  bor(const bignum& x);
    bignum& bxor(const bignum& x);
    bignum& bnot();
    
    /*bignum& shr(const unsigned int x);
    bignum& shl(const unsigned int x);
    bignum& ror(const unsigned int x);
    bignum& rol(const unsigned int x);*/
};

bignum::bignum(const unsigned intmax_t init) { copy(init); }

bignum<BITS> bignum::copy(unsigned intmax_t x) {
    while(init!=0) {
        num[0]=init&1;
        shl(1);
        init>>=1;
    }
}

bignum<BITS>& bignum::add(const bignum<BITS>& x) {
    //bitwise calculating table.
    //bits order : carry, a, b
    //result&1 = x, result&2=carry
    static const int calctable[0b111] = {
        0, 1, 1, 2, 1, 2, 2, 3
    };
    bool c=false; //carry
    for(int i=0; i<BITS; i++) {
        const bool a=num[i], b=x.num[i];
        num[i]=calctable[(c<<2)|(b<<1)|(a)]&1;
        carry=calctable[(c<<2)|(b<<1)|(a)]&2;
    }
}

bignum<BITS>& bignum::sub(const bignum<BITS>& x) {
    //Use 2's complement.
    bignum<BITS> t;
    t.copy(x);
    t.bnot();
    t.inc();
    return add(x);
}

#endif // BIGNUM_H_INCLUDED
