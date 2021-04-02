import datetime

utc = datetime.datetime.utcnow()
print(utc.year)
print(str(utc.month).zfill(2))
print(str(utc.day).zfill(2))
