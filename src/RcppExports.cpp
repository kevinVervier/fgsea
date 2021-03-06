// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// calcGseaStatCumulativeBatch
List calcGseaStatCumulativeBatch(NumericVector const& stats, double gseaParam, NumericVector const& pathwayScores, IntegerVector const& pathwaysSizes, int iterations, int seed);
RcppExport SEXP _fgsea_calcGseaStatCumulativeBatch(SEXP statsSEXP, SEXP gseaParamSEXP, SEXP pathwayScoresSEXP, SEXP pathwaysSizesSEXP, SEXP iterationsSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector const& >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< double >::type gseaParam(gseaParamSEXP);
    Rcpp::traits::input_parameter< NumericVector const& >::type pathwayScores(pathwayScoresSEXP);
    Rcpp::traits::input_parameter< IntegerVector const& >::type pathwaysSizes(pathwaysSizesSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(calcGseaStatCumulativeBatch(stats, gseaParam, pathwayScores, pathwaysSizes, iterations, seed));
    return rcpp_result_gen;
END_RCPP
}
// calcGseaStatCumulative
NumericVector calcGseaStatCumulative(NumericVector const& stats, IntegerVector const& selectedStats, double gseaParam);
RcppExport SEXP _fgsea_calcGseaStatCumulative(SEXP statsSEXP, SEXP selectedStatsSEXP, SEXP gseaParamSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector const& >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< IntegerVector const& >::type selectedStats(selectedStatsSEXP);
    Rcpp::traits::input_parameter< double >::type gseaParam(gseaParamSEXP);
    rcpp_result_gen = Rcpp::wrap(calcGseaStatCumulative(stats, selectedStats, gseaParam));
    return rcpp_result_gen;
END_RCPP
}
// calcGseaStatBatchCpp
NumericVector calcGseaStatBatchCpp(NumericVector const& stats, List const& selectedGenes, IntegerVector const& geneRanks);
RcppExport SEXP _fgsea_calcGseaStatBatchCpp(SEXP statsSEXP, SEXP selectedGenesSEXP, SEXP geneRanksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector const& >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< List const& >::type selectedGenes(selectedGenesSEXP);
    Rcpp::traits::input_parameter< IntegerVector const& >::type geneRanks(geneRanksSEXP);
    rcpp_result_gen = Rcpp::wrap(calcGseaStatBatchCpp(stats, selectedGenes, geneRanks));
    return rcpp_result_gen;
END_RCPP
}
