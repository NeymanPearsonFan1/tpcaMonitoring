// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// update_cumsum
NumericMatrix update_cumsum(NumericMatrix& u, NumericVector next_x, int t);
RcppExport SEXP _tpcaMonitoring_update_cumsum(SEXP uSEXP, SEXP next_xSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type u(uSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type next_x(next_xSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(update_cumsum(u, next_x, t));
    return rcpp_result_gen;
END_RCPP
}
// update_cumsum2
NumericMatrix update_cumsum2(NumericMatrix& v, NumericMatrix& u, NumericVector next_x, int m, int t);
RcppExport SEXP _tpcaMonitoring_update_cumsum2(SEXP vSEXP, SEXP uSEXP, SEXP next_xSEXP, SEXP mSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type v(vSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type u(uSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type next_x(next_xSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(update_cumsum2(v, u, next_x, m, t));
    return rcpp_result_gen;
END_RCPP
}
// update_sumsC
List update_sumsC(List& sums, NumericVector next_x, int m, int t);
RcppExport SEXP _tpcaMonitoring_update_sumsC(SEXP sumsSEXP, SEXP next_xSEXP, SEXP mSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type sums(sumsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type next_x(next_xSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(update_sumsC(sums, next_x, m, t));
    return rcpp_result_gen;
END_RCPP
}
// log_lik_ratio
NumericVector log_lik_ratio(int m, int t, int k, NumericVector& s_full, NumericVector& s_pre, NumericVector& s_post);
RcppExport SEXP _tpcaMonitoring_log_lik_ratio(SEXP mSEXP, SEXP tSEXP, SEXP kSEXP, SEXP s_fullSEXP, SEXP s_preSEXP, SEXP s_postSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type s_full(s_fullSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type s_pre(s_preSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type s_post(s_postSEXP);
    rcpp_result_gen = Rcpp::wrap(log_lik_ratio(m, t, k, s_full, s_pre, s_post));
    return rcpp_result_gen;
END_RCPP
}
// log_liks_matC
NumericVector log_liks_matC(List& sums, int m, int t, int w, double p0);
RcppExport SEXP _tpcaMonitoring_log_liks_matC(SEXP sumsSEXP, SEXP mSEXP, SEXP tSEXP, SEXP wSEXP, SEXP p0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type sums(sumsSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type p0(p0SEXP);
    rcpp_result_gen = Rcpp::wrap(log_liks_matC(sums, m, t, w, p0));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_tpcaMonitoring_update_cumsum", (DL_FUNC) &_tpcaMonitoring_update_cumsum, 3},
    {"_tpcaMonitoring_update_cumsum2", (DL_FUNC) &_tpcaMonitoring_update_cumsum2, 5},
    {"_tpcaMonitoring_update_sumsC", (DL_FUNC) &_tpcaMonitoring_update_sumsC, 4},
    {"_tpcaMonitoring_log_lik_ratio", (DL_FUNC) &_tpcaMonitoring_log_lik_ratio, 6},
    {"_tpcaMonitoring_log_liks_matC", (DL_FUNC) &_tpcaMonitoring_log_liks_matC, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_tpcaMonitoring(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
