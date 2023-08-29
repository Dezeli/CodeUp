import os

Programing_Languages = ["C&C++"]
readme = open(f"./README.md", "w", encoding="UTF-8")
readme.write(
    "## CodeUp Solutions   \nhttps://codeup.kr/   \n"
)
for language in Programing_Languages:
    readme.write(f"\n#### {language}\n")
    files = os.listdir(f"./{language}")
    file_list = []

    for filename in files:
        file = open(f"./{language}/{filename}", "r", encoding="UTF-8")
        title = file.readline()[2:-1]
        filenum = filename.split(".")[0]
        readme.write(f"- [{filenum} : {title}](./{language}/{filename})    \n")
readme.close()