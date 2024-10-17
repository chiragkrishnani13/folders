days=int(input())
dic={

}
years= days//365
dic["years"]=years
weeks=days-years*365
dic['weeks']=weeks
day=int(days-(365*years+7*weeks/7))
dic["days"]=day
print(dic)
