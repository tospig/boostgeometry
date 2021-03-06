#' BG Crosses
#'
#' Checks if two geometries cross
#'
#' @param x
#' @param y
#'
#' @note
#' supported geometries
#' - linestring
#' - multi_linestring
#'
#' @examples
#' x <- "LINESTRING(-1 -1, 0 0, 1 1)"
#' y <- c("LINESTRING(1 -1, 0 0, -1 1)", "LINESTRING(0 0, 1 1)", "LINESTRING(-1 1, 0 0, 1 -1)")
#' bg_crosses(x, y)
#'
#' @export
bg_crosses <- function(x, y, strategy = c("cartesian", "spherical", "geographic")) {
  ## TODO(other coordinate strategies)
  strategy <- match.arg(strategy)
  switch(
    strategy
    , "cartesian"  = rcpp_wkt_crosses_cartesian(x, y)
    , "spherical"  = rcpp_wkt_crosses_spherical(x, y)
    , "geographic" = rcpp_wkt_crosses_geographic(x, y)
  )
}
