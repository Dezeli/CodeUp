import os

Programing_Languages = ["C&C++"]
readme = open(f"./README.md", "w", encoding="UTF-8")
readme.write(
    "## CodeUp Solutions   \nhttps://codeup.kr/userinfo.php?user=Dezeli   \n"
)
for language in Programing_Languages:
    readme.write(f"\n#### {language}\n")
    files = os.listdir(f"./{language}")
    data_list = []

    for filename in files:
        file = open(f"./{language}/{filename}", "r", encoding="UTF-8")
        title = file.readline()[2:-1]
        filenum = filename.split(".")[0]
        data_list.append([int(filenum), title, filename])

    data_list.sort()

    for filenum, title, filename in data_list:
        readme.write(f"- [{filenum} : {title}](./{language}/{filename})    \n")
readme.close()