

class DouBanMovie:
    def __init__(self, url, start_page, pages, page_size):
        """
        初始化
        @param url: 爬取主网址
        @param start_page: 起始页码
        @param pages: 总页码（截止页码）
        @param page_size: 每页的大小
        """
        self.url = url
        self.start_page = start_page
        self.pages = pages
        self.page_size = page_size
        self.data_info = []
        self.pymysql_engine, self.pymysql_session = connection_to_mysql()
        self.headers = {
            'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/69.0.3497.100 Safari/537.36'
        }

#  创建基类,
Base = declarative_base()

def connection_to_mysql():
    """
    连接数据库
    @return:
    """
    engine = create_engine('mysql+pymysql://username:passwd@localhost:3306/db_name?charset=utf8')
    Session = sessionmaker(bind=engine)
    db_session = Session()
    # 创建数据表
    Base.metadata.create_all(engine)

    return engine, db_session

