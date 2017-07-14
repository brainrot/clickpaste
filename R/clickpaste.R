click_paste <- R6Class("click_paste",
                       public = list(
                         point_x = NULL,
                         point_y = NULL,
                         initialize = function(point_x = NA, point_y = NA) {
                           self$point_x <- point_x
                           self$point_y <- point_y
                         },
                         get_point = function() {
                           temp<-list()
                           temp[[1]]<-get_point_x()
                           temp[[2]]<-get_point_y()
                           self$point_x<-temp[[1]]
                           self$point_y<-temp[[2]]
                         },
                         single_click = function(x=NULL,y=NULL) {
                           if(is.null(x)&is.null(y)){
                             SC<-SingleClick(self$point_x,self$point_y)
                           }else{
                             SC<-SingleClick(x,y)
                           }
                           SC
                         },
                         paste = function(x){
                           clear_clip()
                           write_clip(x)
                           Sys.sleep(0.1)
                           paste_1()
                         },
                         double_click = function(x=NULL,y=NULL){
                           if(is.null(x)&is.null(y)){
                             DC<-DoubleClick(self$point_x,self$point_y)
                           }else{
                             DC<-DoubleClick(x,y)
                           }
                           DC
                         },
                         right_click = function(x=NULL,y=NULL) {
                           if(is.null(x)&is.null(y)){
                             RC<-RightClick(self$point_x,self$point_y)
                           }else{
                             RC<-RightClick(x,y)
                           }
                           RC
                         },
                         press = function(x){
                           switch(x,
                                  "a"=a_1(),
                                  "b"=b_1(),
                                  "c"=c_1(),
                                  "d"=d_1(),
                                  "e"=e_1(),
                                  "f"=f_1(),
                                  "g"=g_1(),
                                  "h"=h_1(),
                                  "i"=i_1(),
                                  "j"=j_1(),
                                  "k"=k_1(),
                                  "l"=l_1(),
                                  "m"=m_1(),
                                  "n"=n_1(),
                                  "o"=o_1(),
                                  "p"=p_1(),
                                  "q"=q_1(),
                                  "r"=r_1(),
                                  "s"=s_1(),
                                  "t"=t_1(),
                                  "u"=u_1(),
                                  "v"=v_1(),
                                  "w"=w_1(),
                                  "x"=x_1(),
                                  "y"=y_1(),
                                  "z"=z_1(),
                                  "1"=one_1(),
                                  "2"=two_1(),
                                  "3"=three_1(),
                                  "4"=four_1(),
                                  "5"=five_1(),
                                  "6"=six_1(),
                                  "7"=seven_1(),
                                  "8"=eight_1(),
                                  "9"=nine_1(),
                                  "0"=zero_1(),
                                  "f1"=funtion_1(),
                                  "f2"=funtion_2(),
                                  "f3"=funtion_3(),
                                  "f4"=funtion_4(),
                                  "f5"=funtion_5(),
                                  "f6"=funtion_6(),
                                  "f7"=funtion_7(),
                                  "f8"=funtion_8(),
                                  "f9"=funtion_9(),
                                  "f10"=funtion_10(),
                                  "f11"=funtion_11(),
                                  "f12"=funtion_12(),
                                  "enter"=enter_1(),
                                  "shift"=shift(),
                                  "backspace"=backspace_1(),
                                  "delete"=delete_1(),
                                  "control"=control_a(),
                                  "alter"=alter_1(),
                                  "pageup"=pageup_1(),
                                  "pagedown"=pagedown_1(),
                                  "escape"=escape_1(),
                                  stop("Unknown button!")
                                  )

                         }
                       )
)
