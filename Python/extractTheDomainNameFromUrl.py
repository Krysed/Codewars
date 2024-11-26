"""
Write a function that when given a URL as a string, parses out just the domain name and returns it as a string. For example:

* url = "http://github.com/carbonfive/raygun" -> domain name = "github"
* url = "http://www.zombie-bites.com"         -> domain name = "zombie-bites"
* url = "https://www.cnet.com"                -> domain name = cnet"
"""

def domain_name(url):
    if '//' in url:
        url = url.split('//')[1]
    if 'www.' in url:
        url = url.split('www.')[1]
    return url.split('.')[0]



print(domain_name("http://google.com"))
print(domain_name("https://google.co.jp"))
print(domain_name("https://123.net"))
print(domain_name("https://www.codewars.com"))
print(domain_name("http://www.hyphen-site.org"))
print(domain_name("www.hyphen-site.org"))
print(domain_name("hyphen-site.org"))
