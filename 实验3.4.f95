program test_3_4
implicit none
real::a(5)
data a /32.2,25.2,12,59.0,1.2/
write(*,*) a(:)
call sub(a(5))
end program

subroutine sub(num)
implicit none
real::num(5),t
integer::n,i
!do n=size(num)-1,1,-1
!      do i=1,n
!            if(num(i)>num(i+1))then
!                  t=num(i+1)
!                  num(i+1)=num(i)
!                  num(i)=t
!            end if
!      end do
!end do
write(*,*)num
return
end subroutine
