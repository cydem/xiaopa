program main                        !程序开始
      complex:: da=(1.5,2.0)        !定义复数型da
      complex:: db=(4.5,4.5)        !定义复数型db
      complex::dc=(18.0,10.5)       !定义复数型dc
      complex::center               !定义复数型center
      real a,b,c,p,area             !定义实数型的a,b,c,p,area
      center=(da+db+dc)/3.0         !求重心
      a=abs(dc-db)                  !求三角形的a边长
      b=abs(da-dc)                  !求三角形的b边长
      c=abs(db-da)                  !求三角形的c边长
      p=(a+b+c)/2.0                 !求三角形的半周长
      area=sqrt((p-a)*(p-b)*(p-c)*p)!用海伦公式求三角形的面积
      write(*,*) center,area        !输出结果 重心和面积
end program main                    !程序结束
