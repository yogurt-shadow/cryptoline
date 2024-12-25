#ifndef SHIFTOP_H
#define SHIFTOP_H

#include "misc/auxiliary.h"
#ifdef HAVE_SHIFTBBA
#include "monomials/ring.h"

poly shift_pp_Mult_mm(poly p, const poly m, const ring r);
poly shift_p_Mult_mm(poly p, const poly m, const ring r);
poly shift_pp_mm_Mult(poly p, const poly m, const ring r);
poly shift_p_mm_Mult(poly p, const poly m, const ring r);
poly shift_p_Minus_mm_Mult_qq(poly p, poly m, poly q, int& Shorter, const poly spNoether, const ring r);
poly shift_pp_Mult_mm_Noether_STUB(poly p, const poly m, const poly spNoether, int &ll, const ring ri);
poly shift_pp_Mult_Coeff_mm_DivSelectMult_STUB(poly p,const poly m, const poly a, const poly b, int &shorter,const ring r);
poly shift_pp_Mult_Coeff_mm_DivSelect_STUB(poly p, const poly m, int &shorter, const ring r);

void p_mLPunshift(poly m, const ring ri);
void p_LPunshift(poly p, const ring ri);
void p_mLPshift(poly p, int sh, const ring r);
void p_LPshift(poly p, int sh, const ring r);
#define pLPunshift(p, sh) p_LPunshift(p, currRing)
#define pmLPunshift(p, sh) p_mLPunshift(p, currRing)
#define pLPshift(p, sh) p_LPshift(p, sh, currRing)
#define pmLPshift(p, sh) p_mLPshift(p, sh, currRing)

int p_LastVblock(poly p, const ring r);
int p_mLastVblock(poly p, const ring r);
int p_mLastVblock(poly p, int *expV, const ring r);
int p_FirstVblock(poly p, const ring r);
int p_mFirstVblock(poly p, const ring r);
int p_mFirstVblock(poly p, int *expV, const ring r);
#define pLastVblock(p) p_LastVblock(p,currRing)
#define pmLastVblock(p) p_mLastVblock(p,currRing)
#define pFirstVblock(p) p_FirstVblock(p,currRing)
#define pmFirstVblock(p) p_mFirstVblock(p,currRing)

void p_LPExpVappend(int *m1ExpV, int *m2ExpV, int m1Length, int m2Length, const ring ri);
void p_LPExpVprepend(int *m1ExpV, int *m2ExpV, int m1Length, int m2Length, const ring ri);

void WriteLPExpV(int *expV, ring ri);
char* LPExpVString(int *expV, ring ri);

void k_SplitFrame(poly &m1, poly &m2, int at, const ring r);
#define kSplitFrame(m1, m2, at) k_SplitFrame(m1, m2, at, currRing)

int id_IsInV(ideal I, const ring r);
int p_IsInV(poly p, const ring r);
int p_mIsInV(poly p, const ring r);
#define idIsInV(I) id_IsInV(I, currRing)
#define pIsInV(p) p_IsInV(p, currRing)
#define pmIsInV(p) p_mIsInV(p, currRing)

BOOLEAN p_LPDivisibleBy(poly a, poly b, const ring r);
BOOLEAN p_LPLmDivisibleBy(poly a, poly b, const ring r);
BOOLEAN _p_LPLmDivisibleByNoComp(poly a, poly b, const ring r);
BOOLEAN p_LPDivisibleBy(ideal I, poly p, ring r);
#define pLPDivisibleBy(a, b) p_LPLmDivisibleBy(a, b, currRing)
#define pLPLmDivisibleBy(a, b) p_LPLmDivisibleBy(a, b, currRing)

BOOLEAN _p_mLPNCGenValid(poly p, const ring r);
BOOLEAN _p_mLPNCGenValid(int *mExpV, const ring r);

poly p_LPVarAt(poly p, int pos, const ring r);

#define pGetNCGen(p) p_GetNCGen(p, currRing)
int p_GetNCGen(poly p, const ring r);

#define pLPSubst(p, n, e) p_LPSubst(p, n, e, r)
#define pmLPSubst(m, n, e) p_LPSubst(m, n, e, r)
poly p_LPSubst(poly p, int n, poly e, const ring r);
poly p_mLPSubst(poly m, int n, poly e, const ring r);

/// create the letterplace ring corresponding to r up to degree d
ring freeAlgebra(ring r, int d, int LPncGenCount = 0);
#endif
#endif
