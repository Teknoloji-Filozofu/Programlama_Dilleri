=begin

chomp
puts işlemi sonunda (/n) varmış gibi davranır 
ama chmop kullanıldığı zaman (\n,\t,\f) gibi 
kaçış dizelerini siler ve devam eder 

chop
değişkenlerin yada alınan değerlerin son harfini siler

=end

isim = "enes\n".chomp
puts "#{isim} nerelerdesin?"

isletimSistemim = "Linux".chop
puts isletimSistemim