import requests
url = requests.get('https://movie.douban.com/top250',auth - ('user','pass'))
print(url.status_code)

