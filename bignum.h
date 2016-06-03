#ifndef BIGNUM_H_INCLUDED
#define BIGNUM_H_INCLUDED

#include <bitset>

template<int BITS>
class bignum {
protected:
    std::bitset<16> num;

public:
    //bignum(const unsigned intmax_t init);
    //bignum(const bignum& init);
    bignum& add(const bignum& x);
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
