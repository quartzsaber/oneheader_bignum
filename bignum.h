#ifndef BIGNUM_H_INCLUDED
#define BIGNUM_H_INCLUDED

#include <bitset>

template<int BITS>
class bignum {
protected:
    std::bitset<BITS> num;

public:
    //bignum(const unsigned intmax_t init);
    //bignum(const bignum& init);
    bignum& add(const bignum& x) {
        //bitwise calculating table.
        //bits order : carry, a, b
        //result&1 = x, result&2=carry
        static const int calctable[7] = {
            0, 1, 1, 2, 1, 2, 2, 3
        };
        bool c=false; //carry
        for(int i=0; i<BITS; i++) {
            const bool a=num[i], b=x.num[i];
            num[i]=calctable[(c<<2)|(b<<1)|(a)]&1;
            carry=calctable[(c<<2)|(b<<1)|(a)]&2;
        }
    }
    bignum& sub(const bignum& x);
    bignum& mul(const bignum& x);
    bignum& div(const bignum& x);

    /*bignum& and(const bignum& x);
    bignum&  or(const bignum& x);
    bignum& xor(const bignum& x);
    bignum& shr(const unsigned int x);
    bignum& shl(const unsigned int x);
    bignum& ror(const unsigned int x);
    bignum& rol(const unsigned int x);*/
};

#endif // BIGNUM_H_INCLUDED
