program ex3_1
      implicit none
      integer a,b,gcd
      read(*,*) a,b
      write(*,*) gcd(a,b)
end program ex3_1
function gcd(a,b)
      implicit none
      integer a,b,t,r
      integer gcd
      if(a<=b)then
            t=a
            a=b
            b=t
      end if
      do while(r>0)
            r=mod(a,b)
            if(r==0)exit
            a=b
            b=r
      end do
      gcd=b
end function
