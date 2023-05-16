# Введение
   * В данной лабораторной работе были написаны 4 вида таблиц: неотсортированная таблица, отсортированная таблица, таблица на основе бинарного дерева поиска, хеш таблица. А также было написано приложение для проверки работы данных таблиц.
   * Таблица – это совокупность связанных данных, хранящихся в структурированном виде. Таблица состоит из записей. Каждая запись состоит из уникального ключа, по которому можно идентифицировать данную запись, и самих данных. Основными операциями в таблице являются: добавления записи в таблице, удаление записи из таблицы и получения данных из записи по ключу. С помощью таблиц удобно хранить данные и быстро получать доступ к ним. 
   * Неотсортированная таблица – это таблица, в которой записи хранятся в неупорядоченном виде. При использовании таблицы такого типа применяется линейный поиск, который работает за линейное время, а при добавлении новой записи, если элемента нет в таблице, то он просто добавляется в конец, а если элемент присутствует, то его данные изменяются. При удалении элемента последний элемент занимает место удаляемого.
   * Отсортированная таблица – это таблица, в которой записи упорядочены по возрастанию ключей. При поиске элемента в такой таблице можно использовать бинарный поиск, который работает за логарифмическое время, но во время добавления элемента в таблицу нужно найти место, в которое можно вставить новый элемент и при этом не нарушить упорядоченность, и после этого переместить все последующие элементы, чтобы вставить новый. Также при удалении нужно переместить все элементы после удаляемого, чтобы заполнить образовавшееся свободное место.
   * Таблица на основе бинарного дерева поиска – это таблица, в которой хранение данных выполняется с помощью бинарного дерева поиска. Бинарное дерево поиска – это структура данных двоичного дерева, в которой ключ любой вершины больше, чем все ключи в левом поддереве данной вершина и меньше, чем все ключи в правом поддереве. Дерево поиска называется сбалансированным, если для каждой его вершины высота ее двух поддеревьев различается не более чем на 1.   При такой реализации поиск работает за логарифмическое время, а при добавлении и удалении элементов не нужно перемещать все последующие элементы, благодаря чему вставка и удаление происходят быстрее, чем в неупорядоченной таблице.
   * Хеш таблица – это таблица, в которой каждый ключ преобразуется в число, которое является индексом в массиве. При этом определенный ключ всегда преобразуется в одно и то же число, что позволяет в среднем случае находить нужную запись за константное время, при этом удаление и добавление также работает за константное время. 
# Постановка задачи
   * Необходимо написать класс таблиц. Данный класс нужен, чтобы унаследовать от него все остальные виды таблиц. Благодаря такому наследованию можно будет использовать   одинаковые интерфейсы таблиц, не имея информации о типе таблицы, что упростит написание приложения для проверки работы данных таблиц.  В классе должны присутствовать конструктор по умолчанию. Также должны быть определены операции, которые будут переопределены в потомках: добавление элемента в таблицу, удаление элемента из таблицы, получение элемента по ключу, вывод таблицы на экран, проверка на пустоту и полноту таблицы. Также в таблице должен быть счетчик, который будет считать количество операций, совершенных при выполнении поиска, добавления и удаления элемента из таблицы.
   * Необходимо написать класс неотсортированных таблиц. Неотсортированная таблица представляет собой таблицу, в которой записи хранятся в неупорядоченном виде. В данном классе должны быть переопределены методы из класса таблиц.
   * Необходимо написать класс отсортированных таблиц. Отсортированная таблица представляет собой таблицу, в которой записи упорядочены по возрастанию. В данном классе должны быть переопределены методы из класса таблиц.
   * Необходимо написать класса таблиц на основе бинарного дерева поиска. В данном классе должны быть переопределены методы из класса таблиц. Также в данном классе должна быть возможность вывода дерева по уровням.
   * Необходимо написать класс хеш таблиц.   Хеш таблица представляет собой таблицу, в которой каждый ключ преобразуется в число, которое является индексом в массиве. В данном классе должны быть переопределены методы из класса таблиц. Также в классе должна присутствовать хеш функция, которая будет преобразовывать ключ в число.
   * В данной программе необходимо написать класс стека, очереди и односвязного списка. Данные структуры данных помогут в реализации алгоритмов, которые используются в таблицах.
   * Также необходимо написать приложение для демонстрации работы созданных классов. В нем должна быть возможность открыть файл с текстом, выбрать таблицу и с помощью таблицы подсчитать сколько раз каждое слово встретилось в тексте. Также должна быть возможность добавить и удалить слово из таблицы, а также получить информацию, сколько раз определенное слово встретилось в тексте.
   
   # Описание структуры программы
   Программа состоит из 17 файлов:
* “List.h” – объявление класса списка (List).
* “List.cpp” – реализация методов класса списка (List).
* “Stack.h” – объявление класса стека (Stack).
* “Stack.cpp” – реализация класса стека (Stack).
* “queue.h” – объявление класса очереди (Queue).
* “queue.cpp” – реализация класса очереди (Queue).
* “Table.h” – объявление класса таблиц (Table).
* “Table.cpp” – реализация класса таблиц (Table).
* “UnsortedTable.h” – объявление класса неотсортированных таблиц (UnsortedTable).
* “UnsortedTable.cpp” – реализация класса неотсортированных таблиц (UnsortedTable).
* “SortedTable.h” – объявление класса отсортированных таблиц (SortedTable).
* “SortedTable.cpp” – реализация класса отсортированных таблиц (SortedTable).
* “BSTTable.h” – объявление класса таблиц на основе бинарного дерева поиска (BSTTable).
* “BSTTable.cpp” – реализация класса таблиц на основе бинарного дерева поиска (BSTTable).
* “HashTable.h” – объявление класса хеш таблиц (HashTable).
* “HashTable.cpp” – реализация класса хеш таблиц (HashTable).
* “main.cpp” – реализация приложения.
# Описание структур данных
   * Для выполнения поставленной задачи в классе таблиц должны содержаться определения методов, которые будут переопределены в классах, унаследованных от этого класса. Если унаследовать остальные таблицы от этого класса, то можно будет использовать   одинаковые интерфейсы таблиц, не имея информации о типе таблицы, что упростит написание приложения. Также в классе должен быть создан счетчик, который будет использоваться в потомках для подсчета количества операций при выполнении какого-либо действия с таблицей.
   * Класс таблиц (Table) содержит одно защищенное поле – счетчик количества операций (int counter). Также в классе есть конструктор по умолчанию, виртуальный деструктор и виртуальный метод получения значения счетчика (int get_counter()). При этом в классе определены следующие чистые виртуальные методы: метод добавления элемента в таблицу (void add(const std::string&)), метод удаления элемента из таблицы (int del(const std::string&)), метод вывода таблицы на экран (void print()), метод получения элемента таблицы по ключу (int get(const std::string&)), метод проверки на пустоту (bool is_empty()), метод проверки на полноту (bool is_full()).
   * Класс неотсортированных таблиц должен публично наследоваться от класса таблиц, чтобы переопределить методы базового класса. В данном классе должны храниться записи таблицы, для которых удобно создать отдельную структуру (Entry), в которой будет храниться ключ и значение записи. Также в классе должны храниться максимальный размер таблицы и текущий размер таблицы. Для хранения записей удобно использовать массив.
   * Класс неотсортированных таблиц содержит 3 защищенных поля: массив записей (Entry* entries), максимальный размер таблицы (int MAX_SIZE), текущий размер таблицы (int cur_size). Также в данном классе содержится: конструктор инициализации с 1 параметром по умолчанию (UnsortedTable( int = 1000)), конструктор копирования, деструктор, метод поиска элемента в таблице (int search(const std::string&)), метод добавления элемента в таблицу (void add(const std::string&)), метод удаления элемента из таблицы (int del(const std::string&)), метод вывода таблицы на экран (void print()), метод получения элемента таблицы по ключу (int get(const std::string&)), метод проверки на пустоту (bool is_empty()), метод проверки на полноту (bool is_full()).
   * Класс отсортированных таблиц публично наследуются от класса неотсортированных таблиц. Такое наследование здесь удобно, потому что поля, необходимые для реализации отсортированной и неотсортированной таблицы, и метод вывода таблицы на экран, проверки на пустоту и полноту совпадают. Поэтому при таком наследовании не нужно дублировать поля и переопределят данные методы. Данная таблица всегда является отсортированной, т.к. при добавлении элемента он сразу занимает нужное место в таблице, и при удалении элемента другие элементы в таблице смещаются, чтобы таблица оставалась отсортированной.
   * Класс отсортированных таблиц содержит: конструктор инициализации с 1 параметром по умолчанию (SortedTable( int = 100)), конструктор копирования, метод поиска элемента в таблице (int binary_search(const std::string&)), метод добавления элемента в таблицу (void add(const std::string&)), метод удаления элемента из таблицы (int del(const std::string&)), метод получения элемента таблицы по ключу (int get(const std::string&)).
   * Класс таблиц на основе бинарного дерева поиска наследуется от класса таблиц, чтобы переопределить методы базового класса. Для написания бинарного дерева поиска необходимо создать класс вершин дерева (Node), в котором будут храниться указатель на левого и правого ребенка вершины, ключ и значение, переменная, отвечающая за состояние баланса дерева. Также в данном классе должен быть указатель на корень дерева.
   * Класс таблиц на основе бинарного дерева поиска содержит 1 приватное поле – указатель на корень дерева (Node* root). Также в классе присутствуют: конструктор по умолчанию, деструктор, метод добавления элемента в таблицу (void add(const std::string&)), метод удаления элемента из таблицы (int del(const std::string&)), метод вывода таблицы на экран (void print()), метод получения элемента таблицы по ключу (int get(const std::string&)), метод проверки на пустоту (bool is_empty()), метод проверки на полноту (bool is_full()), метод вывода дерева таблицы по уровням (void print_tree()), метод балансировки (void balance(Node*&, Node*), метод балансировки после добавления (void balance_after_add(Node*, Stack), метод балансировки после удаления (void balance_after_del(bool, Stack), метод левого поворота (void left_rotate(Node*&, Node*)), метод правого поворота (void right_rotate(Node*&, Node*)), метод большого левого поворота (void big_left_rotate(Node*&, Node*)), метод большого правого поворота (void big_right_rotate(Node*&, Node*)), метод удаления дерева (void delete_tree(Node*)), рекурсивный метод вывода дерева на экран (void rec_print_tree(Node*)).
   * Класс хеш таблиц наследуется от класса таблиц, чтобы переопределить методы базового класса. Для хранения элементов необходимо реализовать массив списков, в которых и будут находиться записи таблицы. Также желательно сделать размер данного массива простым числом, чтобы распределение элементов происходило более равномерно. При преобразовании ключа в хеш может возникнуть коллизия. Коллизия – это ситуация, при которой несколько разных ключей преобразуются в одно и то же число, и, следовательно, попадают в одну и ту же ячейку массива. Для решения данной проблемы массив представляется массивом списков, в который добавляются элементы с одинаковым хешом. И при поиске элемента происходит поиск в соответствующем списке.
   * Класс хеш таблиц содержит 2 приватных поля: массив списков (List* entries) и статический размер массива списков (static const int SIZE = 1021). Также в данном классе присутствуют: конструктор по умолчанию, деструктор, метод добавления элемента в таблицу (void add(const std::string&)), метод удаления элемента из таблицы (int del(const std::string&)), метод вывода таблицы на экран (void print()), метод получения элемента таблицы по ключу (int get(const std::string&)), метод проверки на пустоту (bool is_empty()), метод проверки на полноту (bool is_full()), метод преобразования ключа в индекс массива (unsigned int get_hash(const std::string&).
    
    
    
   # Описание алгоритмов
   ## Метод поиска записи в неотсортированной таблице (search):
Метод получает константную ссылку класса string и возвращает значение типа int. Переданный аргумент является ключом записи, которую нужно найти в таблице. В цикле перебираются все записи таблицы и если ключ какой-то записи совпадает с переданным ключом, то метод возвращает индекс данной записи. Если после перебора всех записей нужный ключ не был найден, то метод вернет значение -1.
   ## Метод добавления записи в неотсортированную таблиц (add):
   Метод получает константную ссылку класса string и ничего не возвращает. Переданный аргумент является ключом записи, которую нужно добавить в таблицу. Сначала с помощью метода search происходит поиск записи в таблице с таким же ключом. Если запись была найдена, то значение данных этой записи увеличивается на 1. Иначе таблица проверяется на полноту: если в таблице места не осталось, то генерируется исключение, иначе в таблицу добавляется запись с данным ключом и значение данных становится равным единице. После этого текущий размер таблицы увеличивается на 1.
   ## Метод удаления записи в неотсортированной таблице (del):
   Метод получает константную ссылку класса string и возвращает значение типа int. Переданный аргумент является ключом записи, которую нужно удалить из таблицы. Сначала с помощью метода search происходит поиск записи в таблице, которую нужно удалить. Если запись была найдена, то ее данные сохраняются, на место удаляемой записи ставится последняя запись в таблице, текущий размер таблицы уменьшается на 1. После этого возвращаются сохраненные данные удаленной записи, а если запись не было найдена, то возвращается 0.
   ## Метод получения данных по ключу в неотсортированной таблице (get):
   Метод получает константную ссылку класса string и возвращает значение типа int. Переданный аргумент является ключом записи, данные которой нужно получить. Сначала с помощью метода search происходит поиск записи, значение которой нужно получить. Если запись была найдена, то возвращается значение ее данных, иначе возвращается 0.
   ## Метод поиска записи в отсортированной таблице (binary_search):
   Метод получает константную ссылку класса string и возвращает значение типа int. Переданный аргумент является ключом записи, которую нужно найти в таблице. В методе реализуется бинарный поиск. Сначала берется левая и правая граница массива и по ним находится запись, которая располагается в середине таблицы. Далее сравнивается переданный ключ и ключ серединной записи: если ключ равны, то возвращается индекс данной записи, иначе если ключ серединной записи больше, то правой границе присваивается индекс серединной – 1, а если ключ серединной меньше, то левой границе присваивается индекс серединной + 1. Данные действия повторяются пока не найдется нужная запись или пока левая граница не станет больше правой. Если после цикла нужная запись не нашлась, то возвращается значение левой границы.
   ## Метод добавления записи в отсортированной таблице (add):
   Метод получает константную ссылку класса string и ничего не возвращает. Переданный аргумент является ключом записи, которую нужно добавить в таблицу. Сначала таблица проверяется на пустоту с помощью метода is_empty(). Если таблица пустая, то в нее добавляется запись с переданным ключом, значение данных становится равным 1, текущий размер таблицы увеличивается на 1, и после этого выполнение метода заканчивается. Если таблица оказалась не пустая, то с помощью метода binary_search происходит поиск записи, ключ которой равен переданному. Если найденный индекс записи меньше текущего размера таблицы и ключ данной записи равен переданному, то значение данных найденной записи увеличивается на 1. Иначе если таблица полная, то генерируется исключение, а если место есть, то индексы всех записей, начиная с найденной увеличиваются на 1, а освободившийся индекс занимает новая запись с ключом, равным переданному и значением данных равным 1. После этого текущий размер таблицы увеличивается на 1.
   ## Метод удаления записи в отсортированной таблице (del):
   Метод получает константную ссылку класса string и возвращает значение типа int. Переданный аргумент является ключом записи, которую нужно удалить из таблицы. Сначала таблица проверяется на пустоту. Если таблица пустая, то метод возвращает значение 0, иначе с помощью метода binary_search происходит поиск записи, которую нужно удалить. Если найденный индекс записи меньше текущего размера таблицы и ключ найденной записи равен переданному ключу, то значение данных найденной записи сохраняется. Далее индекс каждой записи, которая идет после найденной уменьшается на 1. После этого текущий размер таблицы уменьшается на 1 и возвращаются сохраненные данные удаленной записи.
   ## Метод получения данных по ключу в отсортированной таблице (get):
   Метод получает константную ссылку класса string и возвращает значение типа int. Переданный аргумент является ключом записи, данные которой нужно получить. Сначала таблица проверяется на пустоту. Если таблица пустая, то метод возвращает значение 0, иначе с помощью метода binary_search происходит поиск записи, данные которой нужно получить. Если найденный индекс записи меньше текущего размера таблицы и ключ найденной записи равен переданному ключу, то возвращаются данные найденной записи, иначе возвращается 0. 
   ## Метод добавления записи в таблицу на основе бинарного дерева поиска (add):
   Метод получает константную ссылку класса string и ничего не возвращает. Переданный аргумент является ключом записи, которую нужно добавить в таблицу. Сначала таблица проверяется на пустоту. Если таблица пустая, то создается корень дерева, в который записывается переданный ключ и значение данных, равное 1. Если таблица оказалась не пустой, то происходит поиск переданного ключа в дереве. Текущей вершиной становится корень дерева, пока текущая вершина существует выполняются следующие действия:
* Если ключ текущей вершины равен переданному, то значение данных в текущий вершине увеличивается на 1 и выполнение метода завершается.
* Если переданный ключ больше, то в стек вершин добавляется текущая вершина, предыдущая вершина становится равна текущей, а новой текущей вершиной становится правый ребенок текущей вершины.
* Если переданный ключ меньше, то в стек вершин добавляется текущая вершина, предыдущая вершина становится равна текущей, а новой текущей вершиной становится левый ребенок текущей вершины.
    Если вершина с переданным ключом не была найдена, то происходит проверка на полноту таблицы. Если таблица полная, то генерируется исключение. Если таблица оказалась не полной, то создается новая вершина с переданным ключом и значением данных, равным 1.  Далее если переданный ключ больше, чем ключ предыдущей вершины, то новая вершина становится правым ребенком предыдущей вершины, а если меньше, то левым. После этого вызывается метод балансировки дерева после добавления (balance_after_add), в который передается новая вершина и созданный стек, и затем метод завершается. 
## Метод удаления записи в таблице на основе бинарного дерева поиска (del):
   Метод получает константную ссылку класса string и возвращает значение типа int. Переданный аргумент является ключом записи, которую нужно удалить из таблицы. Текущей вершине становится корень дерева. Пока текущая вершина существует выполняются следующие действия:
* Если ключ текущий вершины равен переданному, то вершина найдена и происходит выход из цикла.
* Если переданный ключ больше ключа текущий вершины, то текущая вершина добавляется в стек и новой текущей вершиной становится правый ребенок текущей вершины.	
* Если переданный ключ оказался меньше, то текущая вершина добавляется в стек и новой текущей вершиной становится левый ребенок текущей вершины.
Если нужная вершина не была найдена, то метод возвращает значение 0. Иначе данные найденной вершины сохраняются, и если найденная вершина оказалась корнем дерева и при этом листом, т.е. у нее нет правого и левого ребенка, то корень удаляется, дерево становится пустым и метод возвращает сохраненное значение. Если найденная вершина оказалась не корнем, то с вершины стека берется предыдущая вершина. Далее выполняются следующие действия:
* Если найденная вершина оказалась листом, и если найденная вершина является левым ребенком предыдущей, то у предыдущей вершины убирается левый ребенок, а если вершина является правым ребенком, то убирается правый.
* Если у найденной вершины нет левого ребенка, и если найденная вершина является левым ребенком предыдущей, то левым ребенком предыдущей вершины становится правый ребенок найденной вершины, а если найденная вершина является правым ребенком предыдущей, то правым ребенком предыдущей становится правый ребенок найденной вершины.
* Если у найденной вершины нет правого ребенка, и если найденная вершина является левым ребенком предыдущей, то левым ребенком предыдущей вершины становится левый ребенок найденной вершины, а если найденная вершина является правым ребенком предыдущей, то правым ребенком предыдущей становится левый ребенок найденной вершины.
* Если у вершины есть оба ребенка, то найденная вершина добавляется в стек и начинается поиск замены. Сначала заменой становится левый ребенок найденной вершины. Если у замены нет правого ребенка, то данные и ключ из замены присваиваются в найденной вершину и левым ребенком найденной вершины становится левый ребенок замены. После этого найденной вершиной становится замена. Если у текущей замены есть правый ребенок, то пока у замены есть правый ребенок выполняются следующие действия: замена добавляется в стек, новой заменой становится правый ребенок текущей замены. Когда у замены не будет правого ребенка, данные и ключ найденной вершины заменяются на данные и ключ замены и правым ребенком предыдущей вершины, которая находится на вершине стека, становится левый ребенок замены. Затем найденное вершиной становится замена. 
    После данных действий удаляется найденная вершина и вызывается метод балансировки дерева после удаления (balance_after_del), в который передается флаг, который указывает левым или правым ребенком является удаленная вершина (или ее замена в случае, когда замена необходима) для потомка и созданный стек. Затем метод возвращает сохраненное значение данных удаленной вершины. 
 ## Метод получения данных по ключу в таблице на основе бинарного дерева поиска (get):
   Метод получает константную ссылку класса string и возвращает значение типа int. Переданный аргумент является ключом записи, данные которой нужно получить. Сначала текущей вершиной становится корень дерева. Далее выполняется поиск вершины с ключом, равной переданному. Пока текущая вершина существует выполняются следующие действия:
* Если ключ текущей вершины равен переданному, то данные текущей вершины сохраняются и поиск вершины заканчивается.
* Если переданный ключ больше ключа текущей вершины, то текущей вершиной становится правый ребенок текущей вершины.
* Если переданный ключ оказался меньше ключа текущей вершины, то текущей вершиной становится левый ребенок текущей вершины.
    Если нужная вершина была найдена, то метод возвращает сохраненные данные найденной вершины, иначе метод возвращает значение 0.
 ## Метод балансировки дерева в таблице на основе бинарного дерева поиска (balance):
   Метод получает указатель по ссылке на вершину, в которой произошло изменение баланса (основная вершина), указатель на родителя этой вершины и ничего не возвращает. В методе выполняются следующие действия:
* Если значение баланса в основной вершине равно -2, и при этом у правого ребенка этой вершины значение баланса больше 0, то вызывается метод большого левого поворота (big_left_rotate), в который передается основная вершина и ее родитель. Если у правого ребенка основной вершины значение баланса меньше или равно нулю, то вызывается метод левого поворота (left_rotate), в который предается основная вершина и ее родитель.
* Если значение баланса в основной вершине равно 2, и при этом у левого ребенка этой вершины значение баланса меньше 0, то вызывается метод большого правого поворота (big_right_rotate), в который передается основная вершина и ее родитель. Если у левого ребенка основной вершины значение баланса больше или равно нулю, то вызывается метод правого поворота (right_rotate), в который предается основная вершина и ее родитель.
    После данных действий метод завершается.
 ## Метод балансировки после добавления вершины в таблице на основе бинарного дерева поиска (balance_after_add):
   Метод получает указатель на вершину, которая была добавлена в дерево (ребенок) и указатель на стек вершин, в котором лежит путь от новой вершины до корня дерева. Метод ничего не возвращает. Пока стек не пустой выполняется изменение баланса вершин, находящихся в стеке:
* Из стека берется родитель текущего ребенка.
* Если ребенок является правым, то значение баланса родителя уменьшается на 1.
* Если ребенок является левым, то значение баланса родителя увеличивается на 1.
* Если стек не пустой, то с вершины стека, не удаляясь из него, берется предок родителя. 
* Вызывается метод балансировки (balance), в который передается родитель (родитель может изменится, т.к. значение предается по ссылке) и предок родителя.
* Если после этого значение баланса родителя стало равно 0, то балансировка завершается.
* Если баланс родителя не стал равен 0, то родитель становится ребенком и цикл повторяется.
    После выполнения данных действий удаляется стек вершин и метод завершается.
## Метод балансировки после удаления вершины в таблице на основе бинарного дерева поиска (balance_after_del):
   Метод получает булевое значение, которое истинно, если удаляемая вершина была правым ребенком для своего родителя и ложным, если вершина была левым ребенком, также метод получает стек вершин, в которой лежит путь от родителя удаленной вершины до корня дерева. Метод ничего не возвращает. Сначала с вершины стека, не удаляясь, берется ребенок. Пока стек не пустой выполняется изменение баланса вершин, находящихся в стеке:
* Из стека берется родитель вершины. 
* Если ребенок является правым ребенком родителя или ребенок равен родителю и при этом удаленная вершина была правым ребенком, то значение баланса родителя увеличивается на 1.
* Иначе значение баланса родителя уменьшается на 1. 
* Если стек не пустой, то с вершины стека, не удаляясь из него, берется предок родителя. 
* Вызывается метод балансировки (balance), в который передается родитель (родитель может изменится, т.к. значение предается по ссылке) и предок родителя.
* Если после этого значение баланса родителя стало равно 0, то балансировка завершается.
* Если баланс родителя не стал равен 0, то родитель становится ребенком и цикл повторяется.
    После выполнения данных действий удаляется стек вершин и метод завершается.
 ## Метод левого поворота дерева в таблице не основе бинарного дерева поиска (left_rotate):
   Метод получает указатель по ссылке на вершину, в которой произошло нарушение баланса (основная вершина), родителя этой вершины и ничего не возвращает.
* Если родитель существует и если основная вершина является правым ребенком, то правым ребенком родителя становится правый ребенок основной вершины, а если основная вершина является левым ребенком, то левым ребенком родителя становится правый ребенок основной вершины. Если родителя не существует, то корнем дерева становится правый ребенок основной вершины. 
* Если баланс правого ребенка основной вершины равен 0, то баланс основной вершины становится равен -1, иначе баланс становится равен 0.
* Баланс правого ребенка основной вершины увеличивается на 1.
* Правым ребенком основной вершины становится левый ребенок правого ребенка основной вершины.
* Левым ребенком правого ребенка основной вершины становится основная вершина.
* Основной вершиной становится правый ребенок основой вершины.
    После данных действий метод завершается.
## Метод правого поворота дерева в таблице не основе бинарного дерева поиска (right_rotate):
   Метод получает указатель по ссылке на вершину, в которой произошло нарушение баланса (основная вершина), родителя этой вершины и ничего не возвращает.  Данный метод выполняется зеркально левому повороту. 
* Если родитель существует и если основная вершина является правым ребенком, то правым ребенком родителя становится левый ребенок основной вершины, а если основная вершина является левым ребенком, то левым ребенком родителя становится левый ребенок основной вершины. Если родителя не существует, то корнем дерева становится левый ребенок основной вершины. 
* Если баланс правого ребенка основной вершины равен 0, то баланс основной вершины становится равен 1, иначе баланс становится равен 0.
* Баланс правого ребенка основной вершины уменьшается на 1.
* Левым ребенком основной вершины становится правый ребенок левого ребенка основной вершины.
* Правым ребенком левого ребенка основной вершины становится основная вершина.
* Основной вершиной становится левый ребенок основой вершины.
    После данных действий метод завершается.
 ## Метод большого левого поворота в таблице на основе бинарного дерева поиска (big_left_rotate):
   Метод получает указатель по ссылке на вершину, в которой произошло нарушение баланса (основная вершина), родителя этой вершины и ничего не возвращает.  Сначала сохраняется значение левого ребенка правого ребенка основной вершины. Затем создается копия указателя на правого ребенка основной вершины. После этого вызывается метод правого поворота (right_rotate), в который передается копия правого ребенка и основная вершина. Затем вызывается метод левого поворота, в который передается основная вершина и родитель основной вершины. После того значению баланса основной вершины присваивается 0. Далее выполняются следующие действия:
* Если значение сохраненного баланса равно 0, то баланс левого и правого ребенка основной вершины становится равным 0.
* Если значение сохраненного баланса равно 1, то баланс левого ребенка становится равным 0, а правого -1.
* Если значение сохраненного баланса равно -1, то баланс левого ребенка становится равным 1, а баланс правого 0.
    После этого работа метода завершается.
## Метод большого правого поворота в таблице на основе бинарного дерева поиска (big_right_rotate):
   Метод получает указатель по ссылке на вершину, в которой произошло нарушение баланса (основная вершина), родителя этой вершины и ничего не возвращает. Данный метод выполняется зеркально большому левому повороту. Сначала сохраняется значение правого ребенка левого ребенка основной вершины. Затем создается копия указателя на левого ребенка основной вершины. После этого вызывается метод левого поворота (left_rotate), в который передается копия левого ребенка и основная вершина. Затем вызывается метод правого поворота, в который передается основная вершина и родитель основной вершины. После того значению баланса основной вершины присваивается 0. Далее выполняются следующие действия:
* Если значение сохраненного баланса равно 0, то баланс левого и правого ребенка основной вершины становится равным 0.
* Если значение сохраненного баланса равно 1, то баланс левого ребенка становится равным -1, а правого 0.
* Если значение сохраненного баланса равно -1, то баланс левого ребенка становится равным 0, а баланс правого 1.
    После этого работа метода завершается.
## Рекурсивный метод вывода таблицы на основе бинарного дерева поиска (rec_print_tree):
   Метод получает ссылку на вершину, данные которой нужно вывести и ничего не возвращает. С помощью этого метода выводятся элементы таблицы по возрастанию ключей. Если у переданной вершины существует левый ребенок, то данный метод вызывается для левого ребенка. После этого выводится ключ и данные переданной вершины. И если у вершины есть правый ребенок, то данный метод также вызывается и для правого ребенка. После этого выполнение метода завершается.
##  Метод вывода дерева по уровням в таблице на основе бинарного дерева поиска (print_tree):
Метод ничего не получает и ничего не возвращает. Если корня дерева не существует, то выводится информация о том, что дерево пустое и метод завершается. Если корень есть, то он становится последней вершиной на уровне и добавляется в очередь. Далее пока очередь не пустая выполняются следующие действия:
* Из очереди берется вершина, которая будет являться родителем.
* Ключ и данные из взятой вершины выводятся на экран	.
* Если у родителя существует левый ребенок, то левый ребенок становится текущим ребенком и добавляется в очередь. 
* Если у родителя есть правый ребенок, то он становится текущим ребенком и добавляется в очередь.
* Если родитель равен последней вершине на уровне, то происходит переход на новый уровень и последней вершиной на уровне становится текущий ребенок. 
После данного цикла метод завершается.
 ## Рекурсивный метод удаления дерева в таблице на основе бинарного дерева поиска (delete_tree):
 Метод получает указатель на вершину, которую нужно удалить и ничего не возвращает.
	Если переданный указатель является пустым, то работа метода завершается. Если у переданной вершины есть левый ребенок, то данный метод вызывается для левого ребенка. Если у вершины есть правый ребенок, то данный метод вызывается для правого ребенка. После этого переданная вершина удаляется и работы метода завершается.
 ## Метод получения хеша в хеш таблице (get_hash):
  Метод получает константную ссылку на ключ, который нужно преобразовать в хеш и возвращает значение типа unsigned int. Для преобразования ключа в хеш складываются все коды символов ключа, умноженные на соответствующий порядковый номер символа в ключе. Далее берется остаток от деления полученной суммы на количество списков в хеш таблице. Данный остаток и будет являться хешом данного ключа. После этого метод вернет значение хеша. 
## Метод добавления элемента в хеш таблице (add):
  Метод получает константную ссылку класса string и ничего не возвращает. Переданный аргумент является ключом записи, которую нужно добавить в таблицу. Сначала с помощью метода получения хеша (get_hash) находится хеш переданного ключа. Далее в список, индекс которого равен полученному хешу добавляется запись с ключом, равным переданному. Добавление в список происходит с помощью его собственного метода добавления в список (add). После этого метода завершается.
## Метод удаления элемента в хеш таблице (del):
  Метод получает константную ссылку класса string и возвращает значение типа int. Переданный аргумент является ключом записи, которую нужно удалить из таблицы. Сначала с помощью метода получения хеша (get_hash) находится хеш переданного ключа. Далее из списка, индекс которого равен полученному хешу удаляется запись с ключом, равным переданному. Удаление из списка происходит с помощью его собственного метода удаления из списка (del). После этого метода завершается.
## Метод получения записи в хеш таблице (get):
  Метод получает константную ссылку класса string и возвращает значение типа int. Переданный аргумент является ключом записи, данные которой нужно получить. Сначала с помощью метода получения хеша (get_hash) находится хеш переданного ключа. Далее из списка, индекс которого равен полученному хешу нужно получить данные записи с ключом, равным переданному. Получение данных записи из списка происходит с помощью его собственного метода получения данных (get). После этого метод вернет полученные данные и завершится.
    
# Заключение
   Таким образом, мы написали программу, которая выполняет все функции, заданные ранее. Для проверки корректности работы программы были проведены несколько тестов. Полученные данные в целом совпадают с аналитической оценкой сложности алгоритмов, использовавшихся при написании данных таблиц. 
    Также благодаря данной лабораторной работе мы научились реализовывать бинарное дерево поиска, хеш функции и применять их для решения более сложных задач. При этом мы научились разными способами представлять таблицы в программе, а также реализовывать добавление, удаление и поиск записей в этих таблицах
