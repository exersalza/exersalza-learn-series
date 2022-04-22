class ParserMeta(type):
    def __instancecheck__(cls, instance):
        return cls.__subclasscheck__(type(instance))

    def __subclasscheck__(cls, subclass):
        return (hasattr(subclass, 'load_data_source') and
                callable(subclass.load_data_source) and
                hasattr(subclass, 'extract_text') and
                callable(subclass.extract_text))


class UpdateInformalParserInterface(metaclass=ParserMeta):
    pass


class PdfParserNew:
    def load_data_source(self, path: str, file_name: str) -> str:
        pass

    def extract_text(self, full_file_path: str) -> str:
        pass


class EmlParserNew:
    def load_data_source(self, path: str, file_name: str) -> str:
        pass

    def extract_text_from_email(self, full_file_path: str) -> dict:
        pass


class InformalParserInterface:
    def load_data_source(self, path: str, filename: str) -> str:
        pass

    def extract_text(self, full_file_name: str) -> dict:
        pass


class PdfParser(InformalParserInterface):
    def load_data_source(self, path: str, filename: str) -> str:
        pass

    def extract_text(self, full_file_name: str) -> dict:
        pass


class EmlParser(InformalParserInterface):
    def load_data_source(self, path: str, filename: str) -> str:
        pass

    def extract_text_from_email(self, full_file_name: str) -> dict:
        pass
