program main
    implicit none
    character(len=200) str
    read(*,"(a200)") str
    call sub(str)
    stop
end program main
subroutine sub(str)
    character(len=200) t,str
    integer i,c
    c=0
    t=""
    do i=1,200
	c=ichar(str(i:i))
	if((c>=65.and.c<=90).or.(c>=97.and.c<=122))then
	  t=trim(t)//str(i:i)
      end if
    end do
    write(*,*) t
    return
end
