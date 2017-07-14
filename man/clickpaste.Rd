\name{clickpaste}
\alias{clickpaste}
\title{create a object belong to click_paste class}
\usage{
click_paste$new(x,y)
}
\description{
objects of click_paste class have useful methods like get_point, single_click and so on.
}
\examples{
#create x which has not explicit coordinate
x<-click_paste$new()
#create y which has coordinate(1,1)
y<-click_paste$new(1,1)
#send your mouse's location to x
x$get_point()
#single click on the coordinate which x records
x$single_click()
#double_click on the coordinate which x records
x$double_click()
#copy& paste the hello world wording
x$paste("hello world")
#press button
x$press("enter")
x$press("control")
x$press("backspace")
}
