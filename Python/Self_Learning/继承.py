class Phone():
    IMEI = None
    Producer = "A"
    def call_by_4g(self):
        print("4g")
class Phone2022(Phone):
    face_id = "100111"

    def call_by_5g(self):
        print("5g")

p = Phone2022()
p.Producer
p.call_by_4g()
p.call_by_5g()

class NFCReader:
    type = "5"
    def read_card(self):
        print("read")
    def write_card(self):
        print("write")
class Remote:
    def RemoteControler(self):
        print("controller")


class my_phone(Phone,NFCReader,Remote):
    pass
p = my_phone()
p.call_by_4g()
p.read_card()
p.write_card()
p.RemoteControler()