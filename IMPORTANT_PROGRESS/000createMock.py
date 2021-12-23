i = 0
for i in range(1, 31):
    open('2021-06-%s.md' % i, 'w').write('# 2021-06-'+str(i)+'\n'+'\n'+ '## routine'+
'\n'+'\n'+ '## things to do'+'\n'+'\n'+ '## Journal'+'\n'+'\n'+ '## read today'+'\n'+'\n'+ '## watched today'
+'\n'+'\n'+ '## photo log')
