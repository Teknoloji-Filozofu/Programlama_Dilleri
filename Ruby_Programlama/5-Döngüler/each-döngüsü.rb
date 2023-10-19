dizi = ["Ruby","Python","PHP","Java"]

dizi.each do |value|
    puts "#{value} Bir Programlama Dilidir"
end

############################################

array = ["Ruby","Python","PHP","Java"]

i = 1
array.each do |value|
    puts "#{i} => #{value} Bir Programlama Dilidir"
    i += 1
end

###############################################

dİzi = ['Ruby on Rails' => 'Ruby',
        'Django' => 'Python',
        'Java EE' => 'Java',
        'Laravel' => 'PHP']

dİzi.each do |key,value|
    puts "#{key} bir #{value} Framework'dür.."
end

################################################

(1..10).each do |value|
    puts "#{value} numaralı satır"
end

############

(1...10).each do |value|
    puts "#{value} numaralı satır"
end

################################################

array = ['PHP','Ruby','Java']

array.each_with_index do |value, key|

    puts "#{value} isimli değerin index numarası => #{key}"

end
