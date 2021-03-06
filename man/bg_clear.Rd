% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/algorithm_clear.R
\name{bg_clear}
\alias{bg_clear}
\title{BG Clear}
\usage{
bg_clear(x)
}
\arguments{
\item{x}{}
}
\description{
Removes all points from a geometry. Points remain unchanged
}
\examples{
bg_clear("POLYGON((0 0,0 1,1 1,1 0,0 0))")
bg_clear("LINESTRING(0 0,1 1)")
bg_clear("MULTIPOINT(0 0,1 1)")

## points remain unchanged
bg_clear("POINT(0 0)")


}
