/****************************************
*  Computer Algebra System SINGULAR     *
****************************************/
/***************************************************************
 *  File:    p_Copy__Template.cc
 *  Purpose: template for p_Copy__T
 *  Author:  obachman (Olaf Bachmann)
 *  Created: 8/00
 *******************************************************************/

LINKAGE poly p_Copy__T(poly s_p, const ring r)
{
  // let's not do tests here -- but instead allow
  // to be sloppy
  spolyrec dp;
  poly d_p = &dp;
  omBin bin = r->PolyBin;
  poly h;

  DECLARE_LENGTH(const unsigned long length = r->ExpL_Size);

  while (s_p != NULL)
  {
    p_AllocBin(pNext(d_p), bin, r);
    pIter(d_p);
    number n_p=pGetCoeff(s_p);
    if (n_p!=NULL) n_p=n_Copy(n_p,r->cf);
    pSetCoeff0(d_p, n_p);
    // it is better to iter here,
    // for MemCopy advances goes from low to high addresses
    h = s_p;
    s_p = pNext(s_p);
    p_MemCopy__T(d_p->exp, h->exp, length);
  }
  pNext(d_p) = NULL;

  return dp.next;
}

