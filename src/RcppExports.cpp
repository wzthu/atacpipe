// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fastxrenamer
int fastxrenamer(Rcpp::List argvs);
RcppExport SEXP _ATACFlow_fastxrenamer(SEXP argvsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type argvs(argvsSEXP);
    rcpp_result_gen = Rcpp::wrap(fastxrenamer(argvs));
    return rcpp_result_gen;
END_RCPP
}
// mergeFile
void mergeFile(Rcpp::CharacterVector destFile, Rcpp::CharacterVector fileList);
RcppExport SEXP _ATACFlow_mergeFile(SEXP destFileSEXP, SEXP fileListSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type destFile(destFileSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type fileList(fileListSEXP);
    mergeFile(destFile, fileList);
    return R_NilValue;
END_RCPP
}
// R_sam2bed_wrapper
Rcpp::List R_sam2bed_wrapper(Rcpp::List argvs, Rcpp::CharacterVector filterList);
RcppExport SEXP _ATACFlow_R_sam2bed_wrapper(SEXP argvsSEXP, SEXP filterListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type argvs(argvsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type filterList(filterListSEXP);
    rcpp_result_gen = Rcpp::wrap(R_sam2bed_wrapper(argvs, filterList));
    return rcpp_result_gen;
END_RCPP
}
// R_sam2bed_merge_wrapper
Rcpp::List R_sam2bed_merge_wrapper(Rcpp::List argvs, Rcpp::CharacterVector filterList);
RcppExport SEXP _ATACFlow_R_sam2bed_merge_wrapper(SEXP argvsSEXP, SEXP filterListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type argvs(argvsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type filterList(filterListSEXP);
    rcpp_result_gen = Rcpp::wrap(R_sam2bed_merge_wrapper(argvs, filterList));
    return rcpp_result_gen;
END_RCPP
}
// bedOprUtils
Rcpp::List bedOprUtils(Rcpp::List argvs, Rcpp::CharacterVector filterList);
RcppExport SEXP _ATACFlow_bedOprUtils(SEXP argvsSEXP, SEXP filterListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type argvs(argvsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type filterList(filterListSEXP);
    rcpp_result_gen = Rcpp::wrap(bedOprUtils(argvs, filterList));
    return rcpp_result_gen;
END_RCPP
}
// lib_complex_qc
Rcpp::List lib_complex_qc(Rcpp::List argvs);
RcppExport SEXP _ATACFlow_lib_complex_qc(SEXP argvsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type argvs(argvsSEXP);
    rcpp_result_gen = Rcpp::wrap(lib_complex_qc(argvs));
    return rcpp_result_gen;
END_RCPP
}
// ChrDivi_wrapper
int ChrDivi_wrapper(Rcpp::List argvs);
RcppExport SEXP _ATACFlow_ChrDivi_wrapper(SEXP argvsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type argvs(argvsSEXP);
    rcpp_result_gen = Rcpp::wrap(ChrDivi_wrapper(argvs));
    return rcpp_result_gen;
END_RCPP
}
// CutCountPre_wrapper
int CutCountPre_wrapper(Rcpp::List argvs);
RcppExport SEXP _ATACFlow_CutCountPre_wrapper(SEXP argvsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type argvs(argvsSEXP);
    rcpp_result_gen = Rcpp::wrap(CutCountPre_wrapper(argvs));
    return rcpp_result_gen;
END_RCPP
}
// CutSiteCount_wrapper
int CutSiteCount_wrapper(Rcpp::List argvs);
RcppExport SEXP _ATACFlow_CutSiteCount_wrapper(SEXP argvsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type argvs(argvsSEXP);
    rcpp_result_gen = Rcpp::wrap(CutSiteCount_wrapper(argvs));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ATACFlow_fastxrenamer", (DL_FUNC) &_ATACFlow_fastxrenamer, 1},
    {"_ATACFlow_mergeFile", (DL_FUNC) &_ATACFlow_mergeFile, 2},
    {"_ATACFlow_R_sam2bed_wrapper", (DL_FUNC) &_ATACFlow_R_sam2bed_wrapper, 2},
    {"_ATACFlow_R_sam2bed_merge_wrapper", (DL_FUNC) &_ATACFlow_R_sam2bed_merge_wrapper, 2},
    {"_ATACFlow_bedOprUtils", (DL_FUNC) &_ATACFlow_bedOprUtils, 2},
    {"_ATACFlow_lib_complex_qc", (DL_FUNC) &_ATACFlow_lib_complex_qc, 1},
    {"_ATACFlow_ChrDivi_wrapper", (DL_FUNC) &_ATACFlow_ChrDivi_wrapper, 1},
    {"_ATACFlow_CutCountPre_wrapper", (DL_FUNC) &_ATACFlow_CutCountPre_wrapper, 1},
    {"_ATACFlow_CutSiteCount_wrapper", (DL_FUNC) &_ATACFlow_CutSiteCount_wrapper, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_ATACFlow(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
