// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_wkt_convex_hull
Rcpp::StringVector rcpp_wkt_convex_hull(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_convex_hull(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_convex_hull(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_envelope_cartesian
Rcpp::StringVector rcpp_wkt_envelope_cartesian(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_envelope_cartesian(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_envelope_cartesian(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_envelope_spherical
Rcpp::StringVector rcpp_wkt_envelope_spherical(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_envelope_spherical(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_envelope_spherical(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_envelope_geographic
Rcpp::StringVector rcpp_wkt_envelope_geographic(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_envelope_geographic(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_envelope_geographic(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_perimeter_cartesian
Rcpp::NumericVector rcpp_wkt_perimeter_cartesian(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_perimeter_cartesian(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_perimeter_cartesian(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_perimeter_spherical
Rcpp::NumericVector rcpp_wkt_perimeter_spherical(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_perimeter_spherical(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_perimeter_spherical(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_perimeter_geographic
Rcpp::NumericVector rcpp_wkt_perimeter_geographic(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_perimeter_geographic(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_perimeter_geographic(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_simplify
Rcpp::StringVector rcpp_wkt_simplify(Rcpp::List wkt, const char* strategy, double distance);
RcppExport SEXP _boostgeometry_rcpp_wkt_simplify(SEXP wktSEXP, SEXP strategySEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< const char* >::type strategy(strategySEXP);
    Rcpp::traits::input_parameter< double >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_simplify(wkt, strategy, distance));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_unique
Rcpp::StringVector rcpp_wkt_unique(Rcpp::List wkt, const char* strategy);
RcppExport SEXP _boostgeometry_rcpp_wkt_unique(SEXP wktSEXP, SEXP strategySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< const char* >::type strategy(strategySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_unique(wkt, strategy));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_boostgeometry_rcpp_wkt_convex_hull", (DL_FUNC) &_boostgeometry_rcpp_wkt_convex_hull, 1},
    {"_boostgeometry_rcpp_wkt_envelope_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_envelope_cartesian, 1},
    {"_boostgeometry_rcpp_wkt_envelope_spherical", (DL_FUNC) &_boostgeometry_rcpp_wkt_envelope_spherical, 1},
    {"_boostgeometry_rcpp_wkt_envelope_geographic", (DL_FUNC) &_boostgeometry_rcpp_wkt_envelope_geographic, 1},
    {"_boostgeometry_rcpp_wkt_perimeter_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_perimeter_cartesian, 1},
    {"_boostgeometry_rcpp_wkt_perimeter_spherical", (DL_FUNC) &_boostgeometry_rcpp_wkt_perimeter_spherical, 1},
    {"_boostgeometry_rcpp_wkt_perimeter_geographic", (DL_FUNC) &_boostgeometry_rcpp_wkt_perimeter_geographic, 1},
    {"_boostgeometry_rcpp_wkt_simplify", (DL_FUNC) &_boostgeometry_rcpp_wkt_simplify, 3},
    {"_boostgeometry_rcpp_wkt_unique", (DL_FUNC) &_boostgeometry_rcpp_wkt_unique, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_boostgeometry(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
