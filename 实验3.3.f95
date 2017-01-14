module tri
    implicit none
    real::a1,a2,a3,x1,x2,x3,s,c
    !a1,a2,a3为三角形的三个角
    !x1,x2,x3为三角形的三条边
    !s,c分别为面积和周长
    contains
    function circle()
        real circle
        circle=x1+x2+x3
    end function
    function area()
        real c,area
        c=(x1+x2+x3)/2
        area=sqrt(c*(c-x1)*(c-x2)*(c-x3))
    end function
    function angle(x1,x2,x3)
        real x1,x2,x3,angle
        angle=acos((x1*x1+x2*x2-x3*x3)/(x1*x2*x3))
    end function    
end module
program ex3_3
      use tri
      implicit none
      write(*,*) "三角形的三边x1,x2,x3分别为:"
      read(*,*) x1,x2,x3
      s=area();c=circle()
      a1=angle(x2,x3,x1);a2=angle(x1,x3,x2);a3=angle(x1,x2,x3)
      write(*,*)"内角:",a1,a2,a3
      write(*,*)"面积:",s
      write(*,*)"周长:",c
end program
