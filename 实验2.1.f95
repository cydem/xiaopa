program main                        !����ʼ
      complex:: da=(1.5,2.0)        !���帴����da
      complex:: db=(4.5,4.5)        !���帴����db
      complex::dc=(18.0,10.5)       !���帴����dc
      complex::center               !���帴����center
      real a,b,c,p,area             !����ʵ���͵�a,b,c,p,area
      center=(da+db+dc)/3.0         !������
      a=abs(dc-db)                  !�������ε�a�߳�
      b=abs(da-dc)                  !�������ε�b�߳�
      c=abs(db-da)                  !�������ε�c�߳�
      p=(a+b+c)/2.0                 !�������εİ��ܳ�
      area=sqrt((p-a)*(p-b)*(p-c)*p)!�ú��׹�ʽ�������ε����
      write(*,*) center,area        !������ ���ĺ����
end program main                    !�������
