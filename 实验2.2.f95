program main
    integer(kind=2) n=17,shu=999
    do while(num>324)
        num = n*(n+2)
        if(num==325) write(*,*) n,n+2
        n=n+2
    enddo
    end program main
