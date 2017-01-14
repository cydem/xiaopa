module tri
      real a,b,c,s,area,ja,jb,jc
      contains
      function circle()
            real circle
            circle=a+b+c
      end function
      function mianji()
            real s,mianji
            s=(a+b+c)/2
            mianji=sqrt(s*(s-a)*(s-b)*(s-c))
      end function
      function jiao(a,b,c)
            real a,b,c
            jiao=acos((a*a+b*b-c*c)/(c*a*b))
      end function
end module
program ex3_3
      use tri
      write(*,*) "a,b,c="
      read(*,*) a,b,c
      s=circle()
      area=mianji()
      jc=jiao(a,b,c);jb=jiao(a,c,b);ja=jiao(b,c,a)
      write(*,*) s,area,ja,jb,jc
end program
