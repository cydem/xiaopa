module tri
    implicit none
    real::a1,a2,a3,x1,x2,x3,s,c
    !a1,a2,a3Ϊ�����ε�������
    !x1,x2,x3Ϊ�����ε�������
    !s,c�ֱ�Ϊ������ܳ�
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
      write(*,*) "�����ε�����x1,x2,x3�ֱ�Ϊ:"
      read(*,*) x1,x2,x3
      s=area();c=circle()
      a1=angle(x2,x3,x1);a2=angle(x1,x3,x2);a3=angle(x1,x2,x3)
      write(*,*)"�ڽ�:",a1,a2,a3
      write(*,*)"���:",s
      write(*,*)"�ܳ�:",c
end program
