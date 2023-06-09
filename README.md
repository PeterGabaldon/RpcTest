# RpcTest

Undocumented BitLocker Service (BDESVC) Local RPC Interface performs a MailSlot ping ([https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-adts/2cff75a9-5871-4493-a704-017b506f8df0](https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-adts/2cff75a9-5871-4493-a704-017b506f8df0)) operation on non-domain joined machines. Apparently, this is not occurring on domain-joined machines. This service runs as SYSTEM.

![244763874-efab6a8f-0089-4936-aa45-3a9ffdb65b3a](https://github.com/PeterGabaldon/RpcTest/assets/34518201/296d70c5-2e8c-4131-ad00-9e5db9ff920f)


When calling method 5, _Proc5_, the service will try to perform the MailSlot ping. It is send to broadcast. Finally, I didn't find a way to abuse it.

![244763492-ef39892c-af3f-4332-ab4d-bb5ff137eba5](https://github.com/PeterGabaldon/RpcTest/assets/34518201/01293869-3285-46d5-a8cd-8b45bc2b9652)

![244764523-08390d55-8a6c-4e0b-8d4b-cfbb23bf1c6f](https://github.com/PeterGabaldon/RpcTest/assets/34518201/dc7c170b-cb2f-48f4-9092-bdbc17db0123)
![244765048-fe0bf888-fb9d-49e0-b989-abcf4ae51b53](https://github.com/PeterGabaldon/RpcTest/assets/34518201/d6cd3231-63f3-4039-be77-469ba1a29bf7)
